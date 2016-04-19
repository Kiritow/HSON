/** HC Script Object Notation (HSON)
*   Developed by HC TECH.
*/

/** HSON On GitHub
*   https://github.com/Kiritow/HSON
*/


#ifndef HC_TECH_GITHUB_PROJECT_HSON_CPP
#define HC_TECH_GITHUB_PROJECT_HSON_CPP

#include <map>
#include <string>
#include <vector>
using namespace std;

namespace hson
{
vector<pack> getpacksfromstring(const string& str)
{
	int begin=0;
	vector<pack> vpck;
	while(begin<(int)str.size()&&str.find("#",begin)!=string::npos)
	{
		int cmdbegin=str.find("#",begin);
		int cmdend=str.find(";",begin);
		int cmdnameover=str.find(":",begin);
		pack pk;
		pk.cmd=str.substr(cmdbegin+1,cmdnameover-cmdbegin-1);
		int databegin=cmdnameover+1;
		while(databegin<cmdend)
		{
			int thisend=str.find(":",databegin);
			if(thisend==(int)string::npos||thisend>=cmdend)
			{
				thisend=cmdend;
			}
			int sep=str.find("=",databegin);
			string a=str.substr(databegin,sep-databegin);
			string b=str.substr(sep+1,thisend-sep-1);
			pk.arg[a]=b;
			databegin=thisend+1;
		}
		vpck.push_back(pk);
		begin=cmdend+1;
	}
	return vpck;
}

}/// End of namespace hson.
#endif // HC_TECH_GITHUB_PROJECT_HSON_CPP
