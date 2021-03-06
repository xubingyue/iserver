#pragma once

namespace _error
{
    enum _value
    {
        ok = 1,
        wrong_psw = -1,
        no_such_user = -2,
        already_login = -3,
        no_auth = -4,

        repeated_region=-10,
        no_such_parent=-11,
        no_such_region=-12,

        operator_fail=-100,
    };

    std::string to_msg(_value val)
    {
        switch (val)
        {
        case ok:
            return "ok";
        case wrong_psw:
            return "wrong password";
        case no_such_user:
            return "no such user";
        case already_login:
            return "no such user";
        case no_auth:
            return "not authorized user";


        default:
            return "";
        }
    }
}