from flask import Flask
from Server.Server_Constants.html_constants import HTML_Constants
from Server.Controllers.offensive_security_controller import offensive_security
import threading

server = Flask(__name__, instance_relative_config=True)

server.register_blueprint(offensive_security)


@server.route('/')
def home():
    return HTML_Constants.WELCOME


class C2_Server:
    @staticmethod
    def run_server():
        server_thread = threading.Thread(target=server.run(host='0.0.0.0')).start()
