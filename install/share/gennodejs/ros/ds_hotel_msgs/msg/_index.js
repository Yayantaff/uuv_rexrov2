
"use strict";

let PWRdevice = require('./PWRdevice.js');
let TriggerChannelConfig = require('./TriggerChannelConfig.js');
let PwrSwitchDeviceCmd = require('./PwrSwitchDeviceCmd.js');
let HTP = require('./HTP.js');
let PWR = require('./PWR.js');
let PwrSwitchDevices = require('./PwrSwitchDevices.js');
let HTPGL = require('./HTPGL.js');
let ClioBattery = require('./ClioBattery.js');
let PowerSupply = require('./PowerSupply.js');
let XrSimState = require('./XrSimState.js');
let XR = require('./XR.js');
let Battery = require('./Battery.js');
let PwrSwitchDeviceStatus = require('./PwrSwitchDeviceStatus.js');
let ClioBatteryPack = require('./ClioBatteryPack.js');
let BatMan = require('./BatMan.js');
let A2D2 = require('./A2D2.js');
let PwrSwitch = require('./PwrSwitch.js');
let Charge = require('./Charge.js');

module.exports = {
  PWRdevice: PWRdevice,
  TriggerChannelConfig: TriggerChannelConfig,
  PwrSwitchDeviceCmd: PwrSwitchDeviceCmd,
  HTP: HTP,
  PWR: PWR,
  PwrSwitchDevices: PwrSwitchDevices,
  HTPGL: HTPGL,
  ClioBattery: ClioBattery,
  PowerSupply: PowerSupply,
  XrSimState: XrSimState,
  XR: XR,
  Battery: Battery,
  PwrSwitchDeviceStatus: PwrSwitchDeviceStatus,
  ClioBatteryPack: ClioBatteryPack,
  BatMan: BatMan,
  A2D2: A2D2,
  PwrSwitch: PwrSwitch,
  Charge: Charge,
};
