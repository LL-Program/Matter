#include "basic/matterTypes.h"

namespace matter 
{

class Random
{
public:
    // Returns u32
    u32 getU32();
    // Returns u32 num [0...max]
    u32 getU32(u32 max);

private:
    u32 mX;
    u32 mY;
    u32 mZ;
    u32 mW;
}; // class Random

inline u32 Random::getU32(u32 max)
{
        return getU32() * u64(max) >> 32u;
}

} // namespace matter