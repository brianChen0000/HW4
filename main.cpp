//
//  main.cpp
//  homework3
//
//  Created by Mac on 2019/3/12.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc,char** argv)
{
    int time,a,sec,min,hour;
    cout<<"請輸入秒數";
    cin >> time;
    {
        sec=time%60;
        a=time/60;
        min=a%60;
        hour=a/60;
    }
    cout << hour << "時" << min << "分" << sec << "秒";
    return 0;
}
