//
//  Banner.h
//  Banner
//
//  Created by Gustavo Maciel on 24/01/21.
//


#include "core/object.h"
#include "../main/admob.h"

#import "app_delegate.h"
#import "view_controller.h"

@class Banner;

@interface Banner: NSObject <GADBannerViewDelegate> {
    GADBannerView *bannerView;
    bool initialized;
    bool loaded;
    int positionBanner;
    NSString *adUnitId;
    ViewController *rootController;
}

- (instancetype)init;
- (void)load_banner: (NSString*) ad_unit_id : (int) position : (NSString*) size : (bool) show_instantly;
- (void)destroy_banner;
- (void)show_banner;
- (void)hide_banner;

- (float) get_banner_width;
- (float) get_banner_height;
- (float) get_banner_width_in_pixels;
- (float) get_banner_height_in_pixels;
- (bool) get_is_banner_loaded;

@end
