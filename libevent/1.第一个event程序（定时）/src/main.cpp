#include <iostream>
#include <functional>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>

// libevent头文件
#include <event.h>
#include <event2/event.h>
#include <event2/event_struct.h>
using namespace std;

// 定时事件回调函数
void onTime(int sock, short event, void *arg)
{
    cout << "Hello Libevent!" << endl;

    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    // 重新添加定时事件（定时事件触发后默认自动删除）
    event_add((struct event*)arg, &tv);
}

int main()
{
    // 初始化
    event_init();

    struct event evTime;
    // 设置定时事件
    evtimer_set(&evTime, onTime, &evTime);

    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    // 添加定时事件
    event_add(&evTime, &tv);

    // 事件循环
    event_dispatch();

    return 0;
}