[English](#hson) | [中文(简体)](#hson-1)  

# HSON
**HSON** represents **HC Script Object Notation**.  
HSON is developed by **HC TECH**.  
Just like JSON, HSON uses some symbolic representation to describe object data.  
Get access to HSON by `#include "hson.h"`.  
##Grammar  
**Command** `#Command:`  
**Data** `Lable=Value`  
**Data Separator** `:`  
**Command Separator** `;`  

Example  
`#ShowDate:Year=2016:Month=4:Day=19;`  
`#ShowTime:Hour=14:Min=43:Sec=5;#TakeLog:fileaddr=/tmp/date.txt;`  

#HSON  
**HSON** 是 **HC Script 对象表示法** 的缩写.  
HSON由**HC TECH**开发.  
与JSON类似,HSON使用一些特殊的符号来描述对象数据.  
使用`#include "hson.h"`将HSON包含到项目中来.  
##语法  
**命令** `#Command:`  
**数据** `Lable=Value`  
**数据分隔符** `:`  
**命令分隔符** `;`  

示例  
`#ShowDate:Year=2016:Month=4:Day=19;`  
`#ShowTime:Hour=14:Min=43:Sec=5;#TakeLog:fileaddr=/tmp/date.txt;`  
