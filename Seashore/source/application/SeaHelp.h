#import "Globals.h"

/*!
	@class		SeaHelp
	@abstract	Displays help on various matters for Seashore users.
	@discussion	N/A
				<br><br>
				<b>License:</b> GNU General Public License<br>
				<b>Copyright:</b> Copyright (c) 2002 Mark Pazolli
*/

@interface SeaHelp : NSObject {
	
	// The bugs and suggestions window
    IBOutlet id bugsWindow;
	
	// The instant help window 
	IBOutlet id instantHelpWindow;
	
	// The label for displaying the instant help text
	IBOutlet id instantHelpLabel;
	
	// Should the user be advised if the download fails?
	BOOL adviseFailure;
	
}

/*!
	@method		goSourceForge:
	@discussion	Opens the default web browser with Seashore's SourceForge page
				to allow users to submit feedback.
	@param		sender
				Ignored.
*/
- (IBAction)goSourceForge:(id)sender;

/*!
	@method		openHelp:
	@discussion	Opens the Seashore help manual.
	@param		sender
				Ignored.
*/
- (IBAction)openHelp:(id)sender;

/*!
	@method		openEffectsHelp:
	@discussion	Opens the Seashore effects guide.
	@param		sender
				Ignored.
*/
- (IBAction)openEffectsHelp:(id)sender;

/*!
	@method		checkForUpdate:
	@discussion	Checks for an update to Seashore.
	@param		sender
				NULL if dialog box feedback should be supressed.
*/
- (IBAction)checkForUpdate:(id)sender;

/*!
	@method		updateInstantHelp:
	@discussion Updates the instant help window with the given string if and
				only if it is visible.
	@param		stringID
				The index of the string in the Instant.plist to be displayed.
*/
- (void)updateInstantHelp:(int)stringID;

@end
