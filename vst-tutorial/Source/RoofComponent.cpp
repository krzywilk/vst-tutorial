/*
  ==============================================================================

    RoofComponent.cpp
    Created: 16 Dec 2021 9:57:23pm
    Author:  Krzysiek

  ==============================================================================
*/

#include <JuceHeader.h>
#include "RoofComponent.h"


//==============================================================================

RoofComponent::RoofComponent(std::tuple<int, int> point1, std::tuple<int, int> point2, std::tuple<int, int> point3)
{
    mainDrawPath.startNewSubPath(std::get<0>(point1), std::get<1>(point1));
    mainDrawPath.lineTo(std::get<0>(point2), std::get<1>(point2));
    mainDrawPath.lineTo(std::get<0>(point3), std::get<1>(point3));
    mainDrawPath.closeSubPath();
}

RoofComponent::~RoofComponent()
{

}

void RoofComponent::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.setColour(juce::Colours::red);


    g.strokePath(mainDrawPath, juce::PathStrokeType::PathStrokeType(1));
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
