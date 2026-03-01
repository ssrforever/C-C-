#include <string>

namespace log_line {
std::string message(std::string line) {
    int index = line.find(":");
    return line.substr(index+2);
    // return the message
}

std::string log_level(std::string line) {
    int index = line.find(":");
    return line.substr(1,index-2);
    // return the log level
}

std::string reformat(std::string line) {
    int index = line.find(":");
    return line.substr(index+2) + " (" + line.substr(1,index-2) + ")";
    // return the reformatted message
}
}  // namespace log_line
