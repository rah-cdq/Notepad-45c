#ifndef CURSORMOVER_HPP
#define CURSORMOVER_HPP


#include "Command.hpp"

class CursorMoveR : public Command
    {
        public:

            void execute(EditorModel& model) override
            {
                
                model.rightCursor();

            }
            void undo(EditorModel& model) override
            {
                model.leftCursor();
            }
    };
#endif