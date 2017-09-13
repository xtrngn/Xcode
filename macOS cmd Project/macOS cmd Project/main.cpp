//
//  main.cpp
//  macOS cmd Project
//
//  Created by movAsi on 2017. 09. 12.
//  Copyright © 2017. movAsi. All rights reserved.
//

#include "main.h"
#include <iostream>
#include <string>

using namespace std;

// --------------------------------------------------------------------------------
//
// RecordStruct::NonInlineDefiniedFuction()
//
// --------------------------------------------------------------------------------
void RecordStruct::NonInlineDefiniedFuction()
{
    std::cout << "RecordStruct::NonInlineDefiniedFuction(): BEGIN" << std::endl;
    std::cout << "RecordStruct::NonInlineDefiniedFuction(): END" << std::endl;
}

// --------------------------------------------------------------------------------
//
// CmdClass Constructor
//
// --------------------------------------------------------------------------------
CmdClass::CmdClass()
{
    std::cout << "CmdClass::CmdClass(): BEGIN" << std::endl;
    std::cout << "CmdClass::CmdClass(): END" << std::endl;
}

// --------------------------------------------------------------------------------
//
// CmdClass Destructor
//
// --------------------------------------------------------------------------------
CmdClass::~CmdClass()
{
    std::cout << "CmdClass::~CmdClass(): BEGIN" << std::endl;
    std::cout << "CmdClass::~CmdClass(): END" << std::endl;
}

CmdClass CmdProject;

// --------------------------------------------------------------------------------
//
// main
//
// --------------------------------------------------------------------------------
int main() {
    CmdProject.InputRecord.m_field_a = "1";
    CmdProject.InputRecord.m_field_b = "2";
    CmdProject.InputRecord.PrintValues();
    CmdProject.InputRecord.Reset();
    CmdProject.InputRecord.NonInlineDefiniedFuction();
    
    return 0;
}
