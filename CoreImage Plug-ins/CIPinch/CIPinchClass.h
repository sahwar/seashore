/*!
	@header		CIPinchClass
	@abstract	Applies a pinch at the specified point.
	@discussion	N/A
				<br><br>
				<b>License:</b> Public Domain 2007<br>
				<b>Copyright:</b> N/A
*/

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Plugins/PluginClass.h>

@interface CIPinchClass : NSObject <PluginClass> {

	// The plug-in's manager
	SeaPlugins *seaPlugins;

	// The label displaying the scale
	IBOutlet id scaleLabel;
	
	// The slider for the scale
	IBOutlet id scaleSlider;
	
	// The panel for the plug-in
	IBOutlet id panel;

	// YES if the application succeeded
	BOOL success;

	// YES if the effect must be refreshed
	BOOL refresh;
	
	// The scale of the bump
	float scale;
	
	// Some temporary space we need preallocated for greyscale data
	unsigned char *newdata;

}
@end
