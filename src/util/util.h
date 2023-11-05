#if defined(ESP8266) || defined(ESP32)
#define IS_ESP
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef IS_ESP
void setPrescaler(int timer, int divisor);
void setMillis(unsigned long ms);
#endif

#ifdef __cplusplus
}
#endif
