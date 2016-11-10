#import "MGLGeoJSONSource.h"

#include <mbgl/style/sources/geojson_source.hpp>

@interface MGLGeoJSONSourceBase (Private)

@property (nonatomic, readwrite) NS_DICTIONARY_OF(MGLGeoJSONSourceOption, id) *options;

- (instancetype)initWithIdentifier:(NSString *)identifier options:(NS_DICTIONARY_OF(MGLGeoJSONSourceOption, id) *)options;

- (mbgl::style::GeoJSONOptions)geoJSONOptions;

@end