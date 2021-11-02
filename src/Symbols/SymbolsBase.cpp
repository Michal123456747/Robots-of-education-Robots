#include "Symbols/SymbolsBase.hpp"
#include "Symbols/SymbolsIDs.hpp"

#include <WString.h>

const String SymbolsBase::SYMBOLS[] = {
    "x",
    "type", "error", "config", "information", "task"}; //table with symbols

String SymbolsBase::getSymbol(int16_t ID)
{
    return SYMBOLS[ID];
}

int16_t SymbolsBase::getID(String symbol) //get ID of symbol
{
    return SymbolsBase::getID(symbol, 0);
}

int16_t SymbolsBase::getID(String symbol, int16_t startID) //get ID of symbol Start search from specific ID
{
    for (int i = startID; i < symbolsTabSize; i++) //iterate by table from startID
    {
        if  (SymbolsBase::SYMBOLS[i] == symbol) //check symbol
        {
            return i;
        }
    }
    //TODO: throw the exception
}
