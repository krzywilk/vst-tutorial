#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent() : roof(std::make_tuple(2, 2), std::make_tuple(20, 24), std::make_tuple(23, 100))
{
    setSize (600, 400);

    addAndMakeVisible(wall);
    addAndMakeVisible(roof);
    
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{

}

void MainComponent::resized()
{
    wall.setBounds(getLocalBounds() );
    roof.setBounds(getLocalBounds() );
}
