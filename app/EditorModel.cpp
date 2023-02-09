// EditorModel.cpp
//
// ICS 45C Spring 2022
// Project #4: People Just Love to Play with Words
//
// Implementation of the EditorModel class

#include "EditorModel.hpp"
#include "EditorException.hpp"


EditorModel::EditorModel()
{

}


int EditorModel::cursorLine() const
{
    return curLine;
}


int EditorModel::cursorColumn() const
{
    return curCol;
}


int EditorModel::lineCount() const
{
    return totalLines;
}


const std::string& EditorModel::line(int lineNumber) const
{
    static std::string removeThis = "BooEdit!";
    return removeThis;
}


const std::string& EditorModel::currentErrorMessage() const
{
    static std::string removeThis = "";
    return removeThis;
}


void EditorModel::setErrorMessage(const std::string& errorMessage)
{
}


void EditorModel::clearErrorMessage()
{
}

//User-Defined
void EditorModel::rightCursor()
{
    /*int a = 1;
    if(a == 2)//implement exception later
    {
        
    }
    else
    {}*/
    ++curCol;
    
}
void EditorModel::leftCursor()
{
    curCol = curCol - 1;
}
