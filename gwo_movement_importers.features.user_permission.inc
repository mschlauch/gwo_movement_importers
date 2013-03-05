<?php
/**
 * @file
 * gwo_movement_importers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gwo_movement_importers_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear csv_import_gwo_business feeds.
  $permissions['clear csv_import_gwo_business feeds'] = array(
    'name' => 'clear csv_import_gwo_business feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear csv_import_gwo_institutions feeds.
  $permissions['clear csv_import_gwo_institutions feeds'] = array(
    'name' => 'clear csv_import_gwo_institutions feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear csv_import_gwo_regional_groups feeds.
  $permissions['clear csv_import_gwo_regional_groups feeds'] = array(
    'name' => 'clear csv_import_gwo_regional_groups feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear csv_import_gwo_supporters feeds.
  $permissions['clear csv_import_gwo_supporters feeds'] = array(
    'name' => 'clear csv_import_gwo_supporters feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import csv_import_gwo_business feeds.
  $permissions['import csv_import_gwo_business feeds'] = array(
    'name' => 'import csv_import_gwo_business feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import csv_import_gwo_institutions feeds.
  $permissions['import csv_import_gwo_institutions feeds'] = array(
    'name' => 'import csv_import_gwo_institutions feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import csv_import_gwo_regional_groups feeds.
  $permissions['import csv_import_gwo_regional_groups feeds'] = array(
    'name' => 'import csv_import_gwo_regional_groups feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import csv_import_gwo_supporters feeds.
  $permissions['import csv_import_gwo_supporters feeds'] = array(
    'name' => 'import csv_import_gwo_supporters feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_import_gwo_business feeds.
  $permissions['unlock csv_import_gwo_business feeds'] = array(
    'name' => 'unlock csv_import_gwo_business feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_import_gwo_institutions feeds.
  $permissions['unlock csv_import_gwo_institutions feeds'] = array(
    'name' => 'unlock csv_import_gwo_institutions feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_import_gwo_regional_groups feeds.
  $permissions['unlock csv_import_gwo_regional_groups feeds'] = array(
    'name' => 'unlock csv_import_gwo_regional_groups feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_import_gwo_supporters feeds.
  $permissions['unlock csv_import_gwo_supporters feeds'] = array(
    'name' => 'unlock csv_import_gwo_supporters feeds',
    'roles' => array(
      'networker' => 'networker',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
