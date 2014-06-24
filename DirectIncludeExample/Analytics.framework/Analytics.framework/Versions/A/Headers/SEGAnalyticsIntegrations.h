//
//  AnalyticsIntegrations.h
//  Analytics
//
//  Created by Travis Jeffery on 5/2/14.
//  Copyright (c) 2014 Segment.io. All rights reserved.
//

#define USE_ANALYTICS_ALL 1

#if defined(USE_ANALYTICS_AMPLITUDE) || defined(USE_ANALYTICS_ALL)
#import "SEGAmplitudeIntegration.h"
#endif

#if defined(USE_ANALYTICS_BUGSNAG) || defined(USE_ANALYTICS_ALL)
#import "SEGBugsnagIntegration.h"
#endif

#if defined(USE_ANALYTICS_COUNTLY) || defined(USE_ANALYTICS_ALL)
#import "SEGCountlyIntegration.h"
#endif

#if defined(USE_ANALYTICS_CRITTERCISM) || defined(USE_ANALYTICS_ALL)
#import "SEGCrittercismIntegration.h"
#endif

#if defined(USE_ANALYTICS_FLURRY) || defined(USE_ANALYTICS_ALL)
#import "SEGFlurryIntegration.h"
#endif

#if defined(USE_ANALYTICS_GOOGLEANALYTICS) || defined(USE_ANALYTICS_ALL)
#import "SEGGoogleAnalyticsIntegration.h"
#endif

#if defined(USE_ANALYTICS_LOCALYTICS) || defined(USE_ANALYTICS_ALL)
#import "SEGLocalyticsIntegration.h"
#endif

#if defined(USE_ANALYTICS_MIXPANEL) || defined(USE_ANALYTICS_ALL)
#import "SEGMixpanelIntegration.h"
#endif

#if defined(USE_ANALYTICS_TAPSTREAM) || defined(USE_ANALYTICS_ALL)
#import "SEGTapstreamIntegration.h"
#endif

#if defined(USE_ANALYTICS_QUANTCAST) || defined(USE_ANALYTICS_ALL)
#import "SEGQuantcastIntegration.h"
#endif

#if defined(USE_ANALYTICS_SEGMENTIO) || defined(USE_ANALYTICS_ALL)
#import "SEGSegmentioIntegration.h"
#endif
