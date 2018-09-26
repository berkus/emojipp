#pragma once

#define 🚗 auto
#define 🚙 auto
#define 🚕 auto
#define 🚓 auto
#define 🏎 auto
#define 🚘 auto
#define 🚖 auto
#define 🚔 auto
#define 🙏 try
#define 🖕 throw
#define 🙈 catch (...)
#define ↩️ return
#define 👍 true
#define 👎 false
#define 🔁 while
#define 🔂 while (1)
#define 🆕 new
#define 🆓 delete
#define 🏠 int main
#define 💩 const_cast
#define 🤷‍ dynamic_cast
#define 🤢 reinterpret_cast
#define 🖨 std::cout
#define 👉 begin
#define 👈 end

#ifdef BUILD_TEST
// example
🏠(int argc, char** argv) {
    🏎 res = 0;
    🙏 {
        🖨 << "Hello world!" << std::endl;
        🖕 "oops";
    }
    🙈 {
        🖨 << "Exception caught!" << std::endl;
    }
    ↩️ res;
}
#endif
