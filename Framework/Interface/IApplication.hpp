//
//  IApplication.hpp
//  GameEngine
//
//  Created by clan on 2023/7/4.
//

#pragma once

#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace My
{

Interface IApplication : implements IRuntimeModule
{
public:
    virtual int Initialize() = 0;
    virtual void Finalize() = 0;
    
    virtual void Tick() = 0;
    
    virtual bool IsQuit() = 0;
};

}


