/*
  ==============================================================================

    WallComponent.cpp
    Created: 16 Dec 2021 9:23:03pm
    Author:  Krzysiek

  ==============================================================================
*/

#include <JuceHeader.h>

#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (juce::Graphics& g)
{
    juce::Rectangle <float> wall(0, 0, 100, 100);
    g.fillCheckerBoard(wall, 10, 10, juce::Colours::aliceblue, juce::Colours::azure);
    g.drawRect(wall);
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
