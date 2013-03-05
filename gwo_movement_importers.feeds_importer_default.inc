<?php
/**
 * @file
 * gwo_movement_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gwo_movement_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_import_gwo_business';
  $feeds_importer->config = array(
    'name' => 'CSV Import GWO business',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'gwo_business',
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'POSTAL CODE',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'THOROUGHFARE',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'STREET NUMBER',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'LOCALITY',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'COUNTRY',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Description',
            'target' => 'body:et:und',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Balance Link',
            'target' => 'field_gwo_balance',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Number Employees',
            'target' => 'field_number_of_employees_',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Contact',
            'target' => 'field_contactbusiness',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_import_gwo_business'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_import_gwo_institutions';
  $feeds_importer->config = array(
    'name' => 'CSV Import GWO institutions',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'gwo_institution',
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_import_gwo_institutions'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_import_gwo_regional_groups';
  $feeds_importer->config = array(
    'name' => 'CSV Import GWO regional groups',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'regional_groups',
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'GUID-parent',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_import_gwo_regional_groups'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_import_gwo_supporters';
  $feeds_importer->config = array(
    'name' => 'CSV Import GWO supporters',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'gwo_supporter',
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'BUSINESS',
            'target' => 'field_business',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'IMAGEURL',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Description',
            'target' => 'body:et:und',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Activity position',
            'target' => 'field_position',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Contact',
            'target' => 'field_contactbusiness',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_import_gwo_supporters'] = $feeds_importer;

  return $export;
}
