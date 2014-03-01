/*
	Command
		Creates a thread that will sleep for a given amount of time

		Credits: Brian Schwietzer

*/
#include "SleepThread.h"
#include <Windows.h>
#include <OpenThreads\Thread>
//#include <chrono>
//include <thread>

SleepThread::SleepThread(int time)
{
	sleepTime = time;
}

void SleepThread::run()
{
	Sleep(sleepTime * 1000);
	//std::this_thread::sleep_for(std::chrono::milliseconds(sleepTime*1000));
}