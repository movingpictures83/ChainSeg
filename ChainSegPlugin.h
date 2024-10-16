#ifndef CHAINSEGPLUGIN_H
#define CHAINSEGPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class ChainSegPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "ChainSeg";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
