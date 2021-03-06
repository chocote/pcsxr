/* ConfigurationController */

#import <Cocoa/Cocoa.h>
#import "PluginController.h"
#import "HotkeyController.h"
#import "PluginList.h"

extern NSString *memChangeNotifier;

@class PcsxrMemCardController;

@interface ConfigurationController : NSWindowController
{
    IBOutlet PluginController *cdromPlugin;
    IBOutlet PluginController *graphicsPlugin;
    IBOutlet PluginController *padPlugin;
    IBOutlet PluginController *soundPlugin;
	IBOutlet PluginController *netPlugin;

	IBOutlet id noXaAudioCell;
	IBOutlet id sioIrqAlwaysCell;
	IBOutlet id bwMdecCell;
	IBOutlet id autoVTypeCell;
	IBOutlet id vTypePALCell;
	IBOutlet id noCDAudioCell;
	IBOutlet id usesHleCell;
	IBOutlet id usesDynarecCell;
	IBOutlet id consoleOutputCell;
	IBOutlet id spuIrqAlwaysCell;
	IBOutlet id rCountFixCell;
	IBOutlet id vSyncWAFixCell;
	IBOutlet id noFastBootCell;
	IBOutlet id enableNetPlayCell;
	IBOutlet id widescreen;
    
    // Hotkeys
    IBOutlet HotkeyController *hkController;
    IBOutlet NSTabViewItem *hkTab;

	IBOutlet NSTextField *mcd1Label;
	IBOutlet NSTextField *mcd2Label;

	PcsxrMemCardController *memCardEdit;
	
	NSMutableDictionary *checkBoxDefaults;
}
- (IBAction)setCheckbox:(id)sender;
- (IBAction)setCheckboxInverse:(id)sender;
- (IBAction)setVideoType:(id)sender;
- (IBAction)mcdChangeClicked:(id)sender;
- (IBAction)mcdNewClicked:(id)sender;
- (IBAction)mcdEditClicked:(id)sender;
- (BOOL)isMemoryCardWindowVisible;

- (NSString *)keyForSender:(id)sender;
+ (void)setMemoryCard:(int)theCard toPath:(NSString *)theFile;

- (void)tabView:(NSTabView *)tabView didSelectTabViewItem:(NSTabViewItem *)tabViewItem;

@end
