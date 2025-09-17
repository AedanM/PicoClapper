#ifndef H_PINDEF
#define H_PINDEF

class PinDefinitions {
    typedef enum {
        RELAY_CONTROL = 1,
    } PIN_DEFS;

    static void SetupOutput();
};

#endif