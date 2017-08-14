// #include <Arduino.h>
//
// #define FASTLED_ALLOW_INTERRUPTS 0
// #include <FastLED.h>
//
// #define LED_PIN 8
// #define NUM_LEDS 100
// #define BRIGHTNESS 64
//
// #define UPDATES_PER_SECOND 100
//
// CRGB leds[NUM_LEDS];
//
// void setup() {
//     delay( 3000 ); // power-up safety delay
//
//     FastLED.addLeds<WS2811, LED_PIN>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
//     FastLED.setBrightness(BRIGHTNESS);
// }
//
// void setLedColors() {
//     for (int i = 0; i < NUM_LEDS; i++) {
//
//         if ( i <= 20 ) {
//             // right panel
//             leds[i] = CRGB::Orange;
//         } else if (i > 20 && i <= 36 ) {
//             // back right
//             leds[i] = CRGB::Red;
//         } else if (i > 36 && i <= 50 ) {
//             // hood
//             leds[i] = CRGB::Purple;
//         } else if (i > 50 && i <= 66 ) {
//             // back left
//             leds[i] = CRGB::Green;
//         } else {
//             // front left
//             leds[i] = CRGB::Blue;
//         }
//     }
// }
//
// void loop() {
//
//     setLedColors();
//
//     FastLED.show();
//     FastLED.delay(1000 / UPDATES_PER_SECOND);
// }
