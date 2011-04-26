/* 
 Boxer is copyright 2011 Alun Bestor and contributors.
 Boxer is released under the GNU General Public License 2.0. A full copy of this license can be
 found in this XCode project at Resources/English.lproj/BoxerHelp/pages/legalese.html, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */

//BXJoystickController receives joystick input from connected controllers via the DDHidLib toolkit.
//These messages are then translated into a more Boxer-friendly format and sent onwards to the
//active DOS session's input controller.

#import <Foundation/Foundation.h>
#import "BXHIDMonitor.h"

@interface BXJoystickController: NSObject <BXHIDMonitorDelegate>
{
	BXHIDMonitor *hidMonitor;
}
@property (readonly, nonatomic) BXHIDMonitor *hidMonitor;

//An array of DDHIDJoystick instances for each joystick currently connected.
//Corresponds to hidMonitor matchedDevices.
@property (readonly, nonatomic) NSArray *joystickDevices;

@end