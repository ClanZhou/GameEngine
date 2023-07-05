//
//  BaseApplication.hpp
//  GameEngine
//
//  Created by clan on 2023/7/4.
//

#pragma once

#include "IApplication.hpp"

namespace My
{

class BaseApplication : implements IApplication
{
public:
    virtual int Initialize();
    virtual void Finalize();
    
    virtual void Tick();
    
    virtual bool IsQuit();
    
protected:
    bool m_bQuit;
};

}
