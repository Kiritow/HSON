/** HC Script Object Notation (HSON)
*   Developed by HC TECH.
*/
#ifndef HC_TECH_GITHUB_PROJECT_HSON_CONFIG_HPP
#define HC_TECH_GITHUB_PROJECT_HSON_CONFIG_HPP

#include <map>
#include <string>
#include <vector>
using namespace std;

namespace hson
{
struct pack
{
	string cmd;
	map<string,string> arg;
};
///Declaration.
vector<pack> getpacksfromstring(const string& str);
}/// End of namespace hson.

#endif /// End of HC_TECH_GITHUB_PROJECT_HSON_CONFIG_HPP
