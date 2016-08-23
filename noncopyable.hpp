#ifndef WOOD_NONCOPYABLE_HPP
#define WOOD_NONCOPYABLE_HPP
namespace wood {
    // Private copy constructor and copy assignment ensure classed drived from
    // class noncopyable cannot be copied.

    namespace noncopyable_
    {
        class noncopyable
        {
            protected:
                noncopyable() = default;
                ~noncopyable() = default;

                noncopyable(const noncopyable&) = delete;
                noncopyable& operator=(const noncopyable&) = delete;
        };
    }

    typedef noncopyable_::noncopyable noncopyable;

}

#endif
