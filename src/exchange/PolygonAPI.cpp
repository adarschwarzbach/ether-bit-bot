#include "PolygonAPI.h"
#include <iostream>
#include <sstream>
#include <cstring>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>

// Constructor
PolygonAPI::PolygonAPI(const std::string &apiKey)
    : apiKey(apiKey), baseUrl("api.polygon.io") {}

std::string PolygonAPI::buildURL(const std::string &endpoint, const std::map<std::string, std::string> &params)
{
}