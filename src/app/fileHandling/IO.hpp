#ifndef IO_hpp
#define IO_hpp

#include <fstream>
#include <string>

class IO
{
public:
      IO(const std::string &file_path);
      ~IO();
      std::fstream getFileStream();

private:
      std::fstream file_stream;
};

#endif
