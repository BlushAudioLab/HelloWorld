/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct Pig
{
    struct PigsEar
    {
        bool earIsFloppy;
    };
    
    int roundness;
    int width;
    float snoutLength;
    PigsEar leftEar;
    PigsEar rightEar;
    
    
    bool strokeOtherEar( PigsEar previousEar, PigsEar newEar );
    
    void beFriendly( int  lovelinessFactor, bool smellsTastyPie);
    void trot( int howFar, int howFast);
};


//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
