#ifndef __pDEBUG_h
#define __pDEBUG_h

#include "../../include/Page.h"
#include "../../include/assets.h"

class pDebug : public Page {
  void Enter() override {
    Serial.println("Debug page entered.");
  }

  void Render() override {
    UI.display->drawBitmap(0, 0, SPLASH_IMG, 128, 64, SSD1306_WHITE);
    UI.render();
  }

  void onEncoderChange(byte value) override {
    Serial.println("Debug Encoder: " + String(value));
  }
};

#endif