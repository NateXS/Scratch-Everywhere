#include "speech_text_gl_core.hpp"
#include "text_gl_core.hpp"
#include <log.hpp>
#include <os.hpp>

SpeechTextObjectGLCore::SpeechTextObjectGLCore(const std::string &text, int maxWidth)
    : TextObjectGLCore(text, 0, 0, "gfx/ingame/fonts/NotoSans-Medium"),
      SpeechText(text, maxWidth) {
    setColor(0x000000FF);
    setCenterAligned(false);
    platformSetText(wrapText());
}

SpeechTextObjectGLCore::~SpeechTextObjectGLCore() {}

float SpeechTextObjectGLCore::measureTextWidth(const std::string &text) {
    return getStringSize(text)[0];
}

void SpeechTextObjectGLCore::platformSetText(const std::string &text) {
    TextObjectGLCore::setText(text);
}

void SpeechTextObjectGLCore::setText(std::string txt) {
    SpeechText::setText(txt);
}
