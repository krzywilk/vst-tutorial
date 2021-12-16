/*
  ==============================================================================

    RoofComponent.h
    Created: 16 Dec 2021 9:57:23pm
    Author:  Krzysiek

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class RoofComponent  : public juce::Component
{
public:
    RoofComponent(std::tuple<int, int> point1, std::tuple<int, int> point2, std::tuple<int, int> point3);
    ~RoofComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Path mainDrawPath;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoofComponent)
};
