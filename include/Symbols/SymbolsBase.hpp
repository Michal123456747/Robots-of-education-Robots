#include <WString.h>

#pragma once

class SymbolsBase //communication symbols
{
public:
    static String getSymbol(uint16_t ID); //get symbols by ID

    static uint16_t getID(String symbol);                   //get ID of symbol
    static uint16_t getID(String symbol, uint16_t startID); //get ID of symbol Start search from specific ID

private:
    const static String SYMBOLS[]; //table with symbols
};
