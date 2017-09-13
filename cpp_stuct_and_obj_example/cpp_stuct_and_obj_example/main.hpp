//
//  main.h
//  macOS cmd Project
//
//  Created by movAsi on 2017. 09. 12..
//  Copyright © 2017. movAsi. All rights reserved.
//

#ifndef main_hpp
#define main_hpp

#include <iostream>
#include <string>


// --------------------------------------------------------------------------------
//
// struct RecordStruct
//
// --------------------------------------------------------------------------------
// A struct is identical to a class except for the default access level (member-wise
// and inheritance-wise). The extra meaning class carries when used with a template.
// Every functionality supported by a class is consequently supported by a struct.
// You'd use methods the same as you'd use them for a class.
// --------------------------------------------------------------------------------
struct RecordStruct {
    // public: In a structure all members are public by default
    // --------------------------------
    // Public inline member definitions
    // --------------------------------
    // Default constructor with variable initialization
    RecordStruct() : m_field_a("a"), m_field_b("b") {
        std::cout << "RecordStruct::RecordStruct(): BEGIN" << std::endl;
        ShowValues("RecordStruct::RecordStruct()");
        std::cout << "RecordStruct::RecordStruct(): END" << std::endl;
    }
    // Default destructor (virtual due to it's a base class)
    virtual ~RecordStruct() { //
        std::cout << "RecordStruct::~RecordStruct(): BEGIN" << std::endl;
        ShowValues("RecordStruct::~RecordStruct()");
        std::cout << "RecordStruct::~RecordStruct(): END" << std::endl;
    }
    // Public functions
    void Reset() { // inline definition
        std::cout << "RecordStruct::Reset(): BEGIN" << std::endl;
        m_field_a = "";
        m_field_b = "";
        ShowValues("RecordStruct::Reset()");
        std::cout << "RecordStruct::Reset(): END" << std::endl;
    }
    void PrintValues() { // inline definition
        ShowValues("RecordStruct::PrintValues()");
    }
    // -------------------------
    // Member function declaration (definied outside of its class definition)
    // -------------------------
    void NonInlineDefiniedFuction(); //

    // -------------------------
    // Public variables
    // -------------------------
    std::string m_field_a;
    std::string m_field_b;

private: // Could define private members too
    // ---------------------------------
    // Private inline member definitions
    // ---------------------------------
    void ShowValues(std::string caller) {
        std::cout << caller << ".m_field_a = [" <<  m_field_a <<  "]" << std::endl;
        std::cout << caller << ".m_field_b = [" <<  m_field_b <<  "]" << std::endl;
    }

};

// --------------------------------------------------------------------------------
//
// class CmdClass
//
// --------------------------------------------------------------------------------
class CmdClass {
public:
    CmdClass();          // Default constructor
    virtual ~CmdClass(); // Default destructor (virtual due to it's a base class)

    RecordStruct InputRecord;
};

#endif /* main_hpp */
