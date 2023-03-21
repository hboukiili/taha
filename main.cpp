#include "Socket/socket.hpp"
#include "Config/parsingConf.hpp"
#include "connection.hpp"

int main(int ac, char **av)
{
    std::vector<ws::server> servers = ConfingParsing(ac, av);
    ws::socketStart(servers);
    return 0;
}