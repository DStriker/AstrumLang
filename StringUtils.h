#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

inline void StringReplace(std::string& s, const std::string& from, const std::string& to) {
	size_t pos = 0;
	while ((pos = s.find(from, pos)) != std::string::npos) {
		s.replace(pos, from.length(), to);
		pos += to.length(); // Move past the replaced substring to find the next occurrence
	}
}

inline std::vector<std::string> StringSplit(const std::string& s, char delimiter) {
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}

inline std::vector<std::string> StringSplit(const std::string& s, const std::string& delimiter) {
	std::vector<std::string> tokens;
	size_t pos_start = 0;
	size_t pos_end;
	size_t delim_len = delimiter.length();
	std::string token;

	while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
		token = s.substr(pos_start, pos_end - pos_start);
		pos_start = pos_end + delim_len;
		tokens.push_back(token);
	}
	tokens.push_back(s.substr(pos_start)); // Add the last token

	return tokens;
}

inline std::string StringUpper(const std::string& from) {
    std::string result = from;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

inline void StringTrim(std::string& s) {
	// Trim leading whitespace
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
		return !std::isspace(ch);
		}));

	// Trim trailing whitespace
	s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
		return !std::isspace(ch);
		}).base(), s.end());
}