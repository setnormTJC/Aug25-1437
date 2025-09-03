#pragma once
#include <vector>
#include <string>


std::vector<std::string> getFileContents(const std::string& filename);

//std::vector<DNDRecrod> getDNDRecords(filename) 

/*Is this method "inclusive" of the "boundary" indices?*/
std::string mySubstring(const std::string& originalString, const int startIndex,
	const int finishIndex);


std::vector<int> getDelimiterLocationsInRecord(const std::string& record, const char delimiter);

std::vector<std::string> splitRecord(const std::string& record, const char delimiter); 

std::vector<std::string> splitRecord_withStringStream(const std::string& record, char delimiter);