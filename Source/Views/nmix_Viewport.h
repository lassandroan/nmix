/*
 *  Copyright 2016 - 2017 Antonio Lassandro 
 *
 *  nmix is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  nmix is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */
 
#ifndef NMIX_VIEWPORT_H
#define NMIX_VIEWPORT_H
 
#include "../JuceLibraryCode/JuceHeader.h"
 
namespace nmix
{

struct Stage;
struct Node;

struct Viewport : public juce::Component
{
 
    Viewport();
    ~Viewport();

    void invokeContextualMenu(juce::MouseEvent e);

    void resized() override;
    
    juce::Label selectionInfo;

    juce::Label operationInfo;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Viewport)
    
};
    
}

#endif // NMIX_VIEWPORT_H
