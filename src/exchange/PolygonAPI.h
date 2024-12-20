#include <iostream>
#include <string>
#include <map>

#ifndef POLYGON_API_H
#define POLYGON_API_H

class PolygonAPI
{

public:
    explicit PolygonAPI(const std::string &apiKey);
    ~PolygonAPI();
    std::string getMarketData(const std::string &ticker, const std::map<std::string, std::string> &params);

private:
    std::string buildURL(const std::string &endpoint, const std::map<std::string, std::string> &params);
    std::string apiKey;
    std::string baseUrl;
};

#endif // POLYGON_API_H
