/*
  ==============================================================================

    WallComponent.h
    Created: 16 Dec 2021 9:23:03pm
    Author:  Krzysiek

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class WallComponent  : public juce::Component
{
public:
    WallComponent();
    ~WallComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WallComponent)
};
