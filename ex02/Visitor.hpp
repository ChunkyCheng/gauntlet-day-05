#pragma once

class Orc; class Bat; class Boss;

struct Visitor
{
    virtual void visit(Orc&) = 0;
    virtual void visit(Bat&) = 0;
    virtual void visit(Boss&) = 0;
    virtual ~Visitor() = default;
};
