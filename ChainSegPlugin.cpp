#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "ChainSegPlugin.h"

void ChainSegPlugin::input(std::string file) {
 inputfile = file;
}

void ChainSegPlugin::run() {}

void ChainSegPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "pdb_chain-segid";
myCommand += " ";
myCommand += inputfile + " > ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<ChainSegPlugin> ChainSegPluginProxy = PluginProxy<ChainSegPlugin>("ChainSeg", PluginManager::getInstance());
