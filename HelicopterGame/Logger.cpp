/*
	Logger
		Singleton Logger that allows a string to be logged to a file with a timestamp

		Credits: Tylor Froese, Brian Schwietzer

*/

#include "Logger.h"
#include "Render.h"
//#include <fstream>
//#include <windows.h>
#include <ctime>
//#include <stdio.h>

using namespace std;


void Logger::log(string data){
	if(loggingOn){
		//SYSTEMTIME time;
		//GetLocalTime(&time);
		time_t t = time(0);
		struct tm * now = localtime(& t);
		//fprintf(logFile,"%04d-%02d-%02d %02d:%02d:%02d.%04d: %s \n",
			//time.wYear,time.wMonth,time.wDay,time.wHour,time.wMinute,time.wSecond,time.wMilliseconds, data.c_str());
		fprintf(logFile,"%04d-%02d-%02d %02d:%02d:%02d.%04d: %s \n",now ->tm_year + 1900, now->tm_mon + 1, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec ,data.c_str()); //Using c++ time library
	}
}
void Logger::openLog()
{
	char * charLog;
	charLog = new char[logFileName.size()+1];
	strcpy(charLog, logFileName.c_str());
	logFile = fopen(charLog,"a");
}
void Logger::closeLog()
{
	fclose(logFile);
}
void Logger::setFileName(string name)
{
	logFileName = name;
}

void Logger::toggleLogging(){
	if(loggingOn)
	{
		closeLog();
		loggingOn = false;
	}
	else
	{
		openLog();
		loggingOn = true;
	}
}

Logger::Logger(){
	loggingOn = false;
}
