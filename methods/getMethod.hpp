#pragma once
#include <iostream>
// #include "../Config/p"
#include <string>
#include <sys/stat.h>
#include "../Config/parse.hpp"

namespace ws
{
    // struct response
    // {
    //     std::string path;
    //     std::string response_header;
    //     std::string mime;
    // };

    std::string pathjoin(std::string root, std::string &path)
    {
        std::string r;
        r = root + path.substr(1);
        return r;
    }
    
    bool fileExists(const std::string& filename) {
        struct stat buffer;
        return (stat(filename.c_str(), &buffer) == 0);
    }

    bool is_directory(const std::string& path)
    {
        struct stat status;
        if (stat(path.c_str(), &status) == 0)
            return (status.st_mode & S_IFDIR) != 0;
        return false;
    }










    // response responseFunction(std::string file, ws::HttpRequest req, int status)
    // {
    //     response response_;
    //     std::ifstream ifile(file.c_str(), std::ios::binary);
    //     std::ostringstream oss;
    //     oss << req.version + response_message(status);
    //     oss << "Date: " << getCurrentDate() << std::endl;
    //     oss << "Content-Type: " <<  check_MIME(file) << "\r\n";
    //     // if (status == 200) i need to set content length 3la hsab lfile
    //     oss << "Content-Length: " << get_size(file) << "\r\n";
    //     oss << "\r\n";
    //     response_.response_header = oss.str();
    //     response_.path = file;
    //     std::cout << response_.response_header << std::endl;
    //     return response_;
    //     // if (status == 404)
    //     // {
    //     //     response = req.version + " 404 Not Found\r\n"
    //     //                 "Date: Sun, 18 Oct 2012 10:36:20 GMT\r\n"
    //     //                 "Server: Apache/2.2.14 (Win32)\r\n"
    //     //                 "Content-Length: 230\r\n"
    //     //                 "Connection: Closed\r\n"
    //     //                 "Content-Type: text/html; charset=iso-8859-1\r\n\r\n"
    //     //                 "<!DOCTYPE HTML PUBLIC "//IETF//DTD HTML 2.0//EN">\r\n"
    //     //                 "<html>\r\n"
    //     //                 "<head>\r\n"
    //     //                 "<title>404 Not Found</title>\r\n"
    //     //                 "</head>\r\n"
    //     //                 "<body>\r\n"
    //     //                 "<h1>404 Not Found</h1>\r\n"
    //     //                 "<p>The requested URL /t.html was not found on this server.</p>\r\n"
    //     //                 "</body>\r\n"
    //     //                 "</html>\r\n";
    //     // }
    //     // return response;
    // }
}